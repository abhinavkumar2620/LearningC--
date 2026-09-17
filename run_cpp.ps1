param(
    [Parameter(Mandatory = $true)]
    [string]$FilePath
)

$fullPath = (Resolve-Path $FilePath).Path
$dir = Split-Path -Parent $fullPath
$fileName = [System.IO.Path]::GetFileNameWithoutExtension($fullPath)
$out = Join-Path $dir "$fileName.exe"

& "C:\MinGW\bin\g++.exe" -std=c++17 -g $fullPath -o $out
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
Write-Host "Running: $out"
& $out
