/*
    %ProjectName%, %Summary%
*/

import QtQuick 2.0
import Sailfish.Silica 1.0
import %ProjectName%.%cClassName:c% 1.0

ApplicationWindow
{
    id: %ProjectName:l%

    property string coverActionLeftIcon: "image://theme/icon-cover-pause"
    property string coverActionRightIcon: "image://theme/icon-cover-play"

    initialPage: Qt.resolvedUrl("pages/%EkaSivu:c%.qml")
    cover: Qt.resolvedUrl("cover/CoverPage.qml")

    function coverActionLeft()
    {
        console.log("Left cover action")
    }

    function coverActionRight()
    {
        console.log("Right cover action")
    }

	%cClassName:c%
	{
		id: %cClassName:l%
	}
}

