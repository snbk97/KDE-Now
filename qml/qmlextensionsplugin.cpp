#include "qmlextensionsplugin.h"
#include "flightreservation.h"
#include "hotelreservation.h"
#include "eventreservaton.h"
#include "restaurantreservation.h"

#include <QtQml/qqml.h>

void QmlExtensionsPlugin::initializeEngine(QQmlEngine *engine, const char *uri)
{
}

void QmlExtensionsPlugin::registerTypes(const char *uri)
{
    qmlRegisterType<FlightReservation>(uri, 0, 1, "FlightReservation")
    qmlRegisterType<HotelReservation>(uri, 0, 1, "HotelReservation")
    qmlRegisterType<EventReservation>(uri, 0, 1, "EventReservation")
    qmlRegisterType<RestaurantReservation>(uri, 0, 1, "RestaurantReservation")
}
