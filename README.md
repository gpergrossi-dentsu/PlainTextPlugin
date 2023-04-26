# PlainTextPlugin
 A very light weight plugin that adds Load Txt and Save Txt blueprint functions.


# Usage Instructions
1. You will need to copy the plugin folder `Plugins/PlainTextConfigs` into your project's `Plugins` folder, which you may need to create if it does not already exist.

2. I recommend you make a folder named `Content/UserConfigs`. Place all of your user-facing plain-text config files in that folder or a sub folder within it.

3. Watch this video for instructions on how to add this folder to your project so it gets automatically copied when you package. 
    
    (Note: Unreal would normally pull all files along with it when it packages the project, but this only works with .uasset files included in Unreal's file reference system. With plain text files it will leave them behind unless you tell it otherwise, see the video).
    
    https://user-images.githubusercontent.com/110255642/234674817-d10a6333-019e-4b9c-a3f0-45693c882226.mp4
    
    (If the video upload above breaks, the video file is also available in this repository at `./HowTo/Add a Non-Asset Directory to Build.mp4`)

4. Make a blueprint to Load/Save using the new blueprint nodes:
    
    ![image](https://user-images.githubusercontent.com/110255642/234676917-9d53533b-12bf-4dbd-9da1-d512c8246827.png)
    
    File paths should always start with `Content/`. (If you followed my recommendation `Content/UserConfigs/`).

5. Loading a text file into a string is not that useful on its own. This plugin is intended to provide this basic functionality so that you can use other plugins / blueprint libraries to do the "parsing" job. (Note: Parsing a plain text config file that is exposed to the user for editing means they could mess it all up. Your parser has to safely handle or ignore errors it finds)

    All string processing operations are up to you and whatever complex blueprint mess you might want to create. I recommend using a different plugin to give yourself more string-processing power, like [this one](https://www.unrealengine.com/marketplace/en-US/product/json-blueprint/questions), which is designed to work with JSON strings, but does not load json files for you (hence this plugin).


# Credits
This whole plugin was developed following a detailed guide at the link below:


[https://sbcomputerentertainment.com/other-2/editor/how-to-create-a-read-write-system-for-txt-files-c-tutorial/](https://sbcomputerentertainment.com/other-2/editor/how-to-create-a-read-write-system-for-txt-files-c-tutorial/)
