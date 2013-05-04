COMPONENT=TestStdControlAppC

PFLAGS += 	-I$(MCS51RT)/tos/lib/net/zigbee/ieee802154/includes \
			-I$(MCS51RT)/tos/lib/net/zigbee/ieee802154/phy \
			-I$(MCS51RT)/tos/lib/net/zigbee/ieee802154/timerasync \
			-I$(MCS51RT)/tos/lib/net/zigbee/ieee802154/interfaces \
			-I$(MCS51RT)/tos/lib/net/zigbee/ieee802154/interfaces/mac \
			-I$(MCS51RT)/tos/lib/net/zigbee/ieee802154/interfaces/phy \
			-I$(MCS51RT)/tos/lib/net/zigbee/cc2420
include $(MAKERULES)

