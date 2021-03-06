/*
    %ProjectName%, %Summary%
*/

import QtQuick 2.0
import Sailfish.Silica 1.0

Page 
{
    id: page

    SilicaFlickable 
	{
        anchors.fill: parent
        
        PullDownMenu 
		{
            MenuItem 
			{
                text: "About..."
                onClicked: pageStack.push(Qt.resolvedUrl("AboutPage.qml"),
                                          { "version": %cClassName:l%.version,
                                              "year": "2014",
                                              "name": "%Summary%",
                                              "imagelocation": "/usr/share/icons/hicolor/86x86/apps/%ProjectName%.png"} )
            }
        }
        
        contentHeight: column.height

        Column 
		{
            id: column

            width: page.width
            spacing: Theme.paddingLarge
            PageHeader 
			{
                title: "%ProjectName:c%"
            }
            Label 
			{ 
                x: Theme.paddingLarge
                text: "Hello you"
                color: Theme.primaryColor
                font.pixelSize: Theme.fontSizeExtraLarge
            }
        }
    }
	
}

