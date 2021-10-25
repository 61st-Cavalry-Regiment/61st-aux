# 61st-aux

![SQF Checker](https://github.com/61st-Cavalry-Regiment/61st-aux/workflows/SQF%20Checker/badge.svg)

## How to add a custom infantry uniform

To add a custom helmet you need to open the [helmet config](addons/uniforms/config.cpp) and add new `NEW_INF_UNIFORM_WEP` and `NEW_INF_UNIFORM` macros in there respective places.  
Then make sure that the texture for them is in the `_textures\inf` folder.

## How to build the mod

Run `build.bat` then add the entire aux mod folder as a local mod on arma to test

## How to build for release

Run `release.bat` and upload the folder in releases.  
Then create a release for it on github and upload the release zipped.
