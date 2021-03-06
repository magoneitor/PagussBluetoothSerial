#import <UIKit/UIKit.h>
#import <ExternalAccessory/ExternalAccessory.h>
#import <Cordova/CDVPlugin.h>

@interface ClassicBluetooth : CDVPlugin <EAAccessoryDelegate, NSStreamDelegate>

//get the currently connected devices.
- (void)list:(CDVInvokedUrlCommand *)command;

//call to connect to a bluetooth device
- (void)connect:(CDVInvokedUrlCommand *)command;

//close the connection
- (void)closeSession:(CDVInvokedUrlCommand *)command;

//call to disconnect to bt device
- (void)disconnect:(CDVInvokedUrlCommand *)command;

//Returns indicating if we are connected to a BT device
- (void)isConnected:(CDVInvokedUrlCommand*)command;

//subscribe to data stream
- (void)subscribe:(CDVInvokedUrlCommand *)command;

@end