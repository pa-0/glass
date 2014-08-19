#README#

##Requirements##

Obviously Rainmeter must be installed. The suite was written using the 3.2 Beta documentation, but it will probably work with 3.1 and future versions. Let me know if you run into issues on your installation.

The Glass suite requires a few fonts:

Roboto (Regular, Bold, Thin, Light)

Roboto Condensed (Regular, Bold)

Climacons (Regular)

The two Roboto fonts can be found [here](http://www.google.com/fonts/specimen/Roboto).

The Climacons font can be found [here](http://adamwhitcroft.com/climacons/font/).

Failing to install Roboto will lead to Rainmeter using a default font. This might not be terrible. Failing to install Climacons will cause weather icons to load as characters instead of icons. This is definitely a terrible thing.

##Installation##

Installing the fonts is easy. On Windows (tested on 8.1, but it should work down to Vista), you simply double-click the .ttf file. A preview window will open, with an option to install in the upper left area.

Installing the skin is as easy as double-clicking the .rmskin file.

Basically installation is easy.

##Methodology##

The most important thing to understand is that I chose to use a font set to replace using images for the weather icons. This simplified my life, since I don't have to store images or worry about handling them, but it does mean that when "1" is typed in the Climacons font, it appears like a weather icon. This is similar to the Wingdings. You could, of course, rewrite this using the images, but that is left as an exercise for the reader.

Aesthetically, my goal was actually to make the transition between my phone and my computer as seamless as possible. The choice of font is (due to a lucky guess) from the same family as Android's (4.4, KitKat) stock font. I also use Nova Launcher and DashClock, which is why Climacons are used (BetterWeather for Dashclock can use Climacons). Feel free to modify to suit your aesthetic inclinations.

I also tried to organize everything using a (sort of) C-like structure. There is a "header" file, "/\@Resources/Settings.inc" that contains all the global variables in use, and each skin also has it's local variables. You can modify any of the variables given, but you shouldn't need to modify the subsequent scripting. Anything there is hardcoded for a specific reason. If you feel adventurous, hack away.

Finally, the code is largely self-commenting, especially to someone familiar with Rainmeter, but I did try to segment and indent blocks to enhance readability.

##Customization##

You are free to customize to your heart's desire. Please be aware of the license when redistributing. All files included with this README are redistributable according to their specific licenses. If you modify a file (and it isn't merged into the master repository, hosted on bitbucket), please make a note of changes and who made the changes in a comment at the top of the relevant files. If your changes are intended to be merged into the master branch of the project, then they will be logged by Git, and will be kept in a CHANGELOG file, which includes version numbering.

As stated previously, anything in the "Settings.inc" file is easy to modify. Anything in a [Variables] section is probably less suited to change, but has been explicitly defined as a variable for such purposes.

Currently, this suite uses IPInfo to get your location (by external IP address), but you could switch to http://www.tell-my-ip.com/ if you wanted. That site is used in some of the Rainmeter WebParser documentation. You'd need to change the skin significantly to adapt it though. Additionally, OpenWeatherMap is used for weather info because I like free and open access. The API key (AppID in the Weather skin) has a somewhat limited usage, so if you are finding that you can't get weather data, head over to their site, register (for free) and get yourself a new AppID. You can also choose a different weather service, if you feel strongly about this. Yahoo! Weather is another popular one (though you'll need to use their GeoPlanet system to get WOEIDs).

##Acknowledgments##

Rainmeter forums - Provided exceptional help in the finer aspects of the Rainmeter scripting language.

Kaelri - The Enigma suite provided much of the code and image base for this suite. While everything was rewritten, the Enigma suite provided an exceptional example to base this on.

Xi.Cynx and poiru - Especially helpful in figuring out the power plugin.
eclectic-tech - Provided feedback when I needed help working around scripting limitations.

Adam Whitcroft - Created the Climacons icons. You can see his work [here](http://adamwhitcroft.com/climacons/). It has a proprietary license.

Christian Robertson - Created the Roboto family of fonts. You can find his work [here](http://www.google.com/fonts/specimen/Roboto). It is licensed under the [Apache License, version 2.0](http://www.apache.org/licenses/LICENSE-2.0.html).

OpenWeatherMap - Provides weather information for current and forecast conditions. You can visit them [here](http://openweathermap.org/).
IPInfo - Provides location information based on your external IP address. You can find them [here](http://ipinfo.io/).