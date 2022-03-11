@ECHO OFF
@REM *******************************************************************
@REM ********************  简单的 CPP 单文件运行脚本     *******************
@REM ********************  例如 run.bat xxx.cpp        *******************
@REM ********************  或者 run.bat .\abc\def.cpp  *******************
@REM ********************************************************************

@REM 设置控制台字符编码
CALL :change_encoding

@REM 获取 cpp 文件名
SET cpp_file_name=%1

@REM 获取前缀名，截取第一个到倒数第5个字符
SET prefix_name=%cpp_file_name:~0,-4%
@REM ECHO %prefix_name%

@REM 编译cpp、运行exe、删除exe
CALL g++ -o %prefix_name%.exe %prefix_name%.cpp && %prefix_name%.exe && DEL %prefix_name%.exe


@REM 修改控制台字符编码的函数，如果不是UTF8则切换到UTF8防止中文乱码
:change_encoding
    SET target_code_page=65001
    SET correct=-1

    @REM 获取当前编码页，类似于Active code page: 936
    FOR /F "delims=" %%i IN ('CHCP') DO ( SET active_code_page=%%i)

    @REM ECHO %active_code_page%
    @REM 判断chcp结果是否包含65001
    ECHO %active_code_page% | findstr %target_code_page% >nul && set correct=1 || set correct=0

    @REM ECHO %correct%
    @REM 如果不包含65001则改变
    IF %correct% EQU 0 ( CHCP 65001 )
GOTO:EOF