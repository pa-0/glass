[Metadata]
	Name = Settings
	Author = Hari Ganti
	Information = Settings file for the Glass suite. | Contact info: hariganti@gmail.com | For license information, see http://creativecommons.org/licenses/by-nc-sa/4.0/ | Commercial use may be permitted by explicit authorization.
	Version = v1.0a
	License = CC BY-NC-SA 4.0

[Variables]
	:User
	Drive = C:

	:Aesthetics
	TextFont = Roboto Condensed
	TextSize = 12
	TextColor = 255, 255, 255, 255
	LabelColor = 128, 128, 128, 255

:----------:
:  Meters  :
:----------:

[Basic]
	SolidColor = 0, 0, 0, 1
	AntiAlias = 1
	FontColor = #TextColor#
	FontFace = #TextFont#
	DynamicVariables = 1

[NormalText]
	FontSize = #TextSize#

[LabelText]
	StringStyle = Bold
	FontColor = #LabelColor#