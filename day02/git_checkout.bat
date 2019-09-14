REM cerner_2^5_2019

echo off

set branch=master
if "%1" NEQ "" set branch=%1

echo:
cd installation-environment-core
echo Switching to %branch%: [33minstallation-environment-core[0m
git checkout %branch%
cd ..
echo:
cd installation-environment-dao-oracle
echo Switching to %branch%: [33minstallation-environment-dao-oracle[0m
git checkout %branch%
cd ..
echo:
cd installation-environment-controller
echo Switching to %branch%: [33minstallation-environment-controller[0m
git checkout %branch%
cd ..
echo:
cd installation-environment-ui-console
echo Switching to %branch%: [33minstallation-environment-ui-console[0m
git checkout %branch%
cd ..
echo:

echo on
:oef
