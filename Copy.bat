cd..
cd..
xcopy .\ExcelLiB\Bin\*.* .\Test\Bin\ /s /d /y /exclude:exclude.txt
xcopy .\ExcelLiB\Bin\*.* .\Excel\Bin\ /s /d /y /exclude:exclude.txt

xcopy .\ExcelLiB\Include\*.h .\Excel\Include\ /s /d /y
xcopy .\ExcelLiB\Include\*.inl .\Excel\Include\ /s /d /y
xcopy .\ExcelLiB\Include\*.hpp .\Excel\Include\ /s /d /y