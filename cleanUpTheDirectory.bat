@REM @echo off表示关闭
@echo off

REM chcp 65001表示将控制台代码设置为utf-8格式
chcp 936

REM color 3f表示将控制台颜色设置为蓝色
color 3f

REM 输出提示然后将用户输入的值赋值给flag
set /p flag=执行清理操作将清理源代码目录下所有exe文件，确定要继续吗(y/n)？

REM 判断flag的值,注意if条件中如果内容比较多需要换行的话，后面的括号"("必须留在和if同一行，否则将无法继续执行
if %flag% == y (

    if exist *.exe (
        del *.exe /f /s /q 
        echo 已删除所有生成的.exe文件
    ) else (
        echo 当前没有需要清理的文件
    )
) 
if %flag% == n (
    echo 你取消了操作
) 

REM 等待用户操作，不要直接退出控制台
pause