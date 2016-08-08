//
//  iOSProgrammingTest2016.h
//  Pods
//
//  Created by Ivanov Andrey on 7/27/16.
//
//

#ifndef iOSProgrammingTest2016_h
#define iOSProgrammingTest2016_h

/*
1. Which of the following UILabel properties help adjust text within a UILabel? //?
 NO - lineBreakMode
 YES - adjustsFontSizeToFitWidth
 NO - numberOfLines
 NO - drawTextInRect
 
 version 2
 YES - lineBreakMode
 YES - adjustsFontSizeToFitWidth
 NO - numberOfLines
 NO - drawTextInRect
 
 
2. Which of the following will make an iphone app return its own version number?
 - [NSString stringWithFormat:@"Version %@ (%@)", [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"], kRevisionNumber]
 
3. Is it possible to set multiple architecture from Build Settings tab in Xcode for a project?
 - YES
 
4. Which of the following is not an Open Source Framework/Library?
 - StoreKit
 
5. Which of the following is not a valid MPVolumeView method?
 – (CGRect)routeButtonRectForBounds:(CGRect)bounds
 
6. What is the correct method to define a delegate object in an ARC Environment?
 - a. @property (nonatomic, weak) id delegate;
 
7. Which of the following is the correct way to set the font size of UIButton title label?
 - someButton.titleLabel.font = [UIFont systemFontOfSize: 15];
 
8. What is the maximum size of an iOS application?
 - 2 GB
 
9. Which of the following is not a valid MKAnnotationView property? (100% я это проверил)
 - None of these.
 
10. Which of the following is not used to find an object contained in NSMutableArray? //?
 Which of the following is not used to find an object contained in NSMutableArray?
 NO - “[myArray filteredArrayUsingPredicate:[NSPredicate predicateWithFormat:“”self == %@””,@””new””]];”
 NO - [myArray indexOfObject:@”New”];
 NO - [myArray containObject:@”New”]; ( [myArray containsObject:@”New”]; )
 YES - [myArray objectPresent];
 
11. Which one is true regarding integrating and using custom fonts in an iOS application?
 - Adding fonts to your app plist allows usage directly in the app. 
 
12. Is it possible to deploy beta build on any device? (100%)
 - Beta build can be deployed only on devices that are included in Mobile Provision certificate while compiling build.
 
13. Which of the following is not a valid UIGestureRecognizer? (%100)
 - UIZoomGestureRecognizer
 
14. Where does Xcode place its build products and other intermediaries/temporary files? (%100)
 YES - In the Derived Data folder
 NO - In the Archives folder
 NO - In the User Data folder
 NO - In the application Document folder
 
15. The iPhone Simulator can be find at:
 - ~/Library/Application Support/iPhone Simulator/
 
16. Which of the following properties would be used to draw a shadow under UIView?
 - CGContextSetShadow();
 
17. Which of the following frameworks is needed to apply a border to an object?
 - QuartzCore
 
18. Which method of Objective-C handles detecting the shake gesture on an iOS device?
 - – (void) accelerometer:(UIAccelerometer *)accelerometer didAccelerate:(UIAcceleration *)acceleration
 
19. Which of the following will set an image on UIButton?
 - [button setImage:[UIImage imageNamed:@”btn_img.png”] forState:UIControlStateNormal];
 
20. Which of the following is not a valid icon size for any iOS device (iPhone, iPod, iPad)? (100%)
 https://developer.apple.com/library/ios/qa/qa1686/_index.html
 
 NO - 114 x 114
 NO - 144 x 144
 NO - 72 x 72
 YES - 64 x 64
 
 
21. Which of the following will print the value of a Boolean flag in NSLog? (%100)
 http://stackoverflow.com/questions/6358349/how-to-print-boolean-flag-in-nslog
 
 NO - NSLog(@“Bool value: %@”,value)
 YES - NSLog(@“Bool value: %d”,value)
 NO - NSLog(@“Bool value: %d.d”,value)
 NO - None of the above ==== maybe this //?

 
22. Which method is used to dismiss keyboard for UITextField?
 NO - [textField becomesFirstResponder];
 NO - [textField dismissKeyboard];
 YES - [textField resignFirstResponder];
 NO - [textField shouldReturn];
 
23. How can the application name of an iOS project be changed?
 YES - Change Bundle Display Name from info.plist
 NO -  Rename Project
 NO -  Change bundle identifier
 NO - Create a new project with New name
 
24. Which of the following is the correct way to get the value of the first object of a NsMutableArray stored in another NsMutableArray?
 YES - [[myArray objectAtIndex:0] objectAtIndex:0];
 NO - [myArray objectAtIndex:0]
 NO - [[[myArray objectAtIndex:0] objectAtIndex:0]objectAtIndex:0];
 NO - [myArray firstObject]
 
25. Which of the following font packages are supported by Cocoa-Touch?
 YES - .ttf (True Type Font)
 NO - .ttc (True Type font Collection)
 NO - .otf (Open Type Font)
 NO - .dFont (MAC OS X Data Fork Font)
 
26. Which of the following allows it to determine if an application is running on iPhone, or if it’s running on an iPod Touch?
 YES - NSString *deviceType = [UIDevice currentDevice].model; if([deviceType isEqualToString:@"iPhone"])
 NO - NSString *deviceType = [UIDevice currentDevice].Size; if([deviceType isEqualToString:@"iPhone"])
 NO - NSString *deviceType = [UIDevice currentDevice].device; if([deviceType isEqualToString:@"Device"])
 NO - NSString *deviceType = [UIDevice currentDevice].iPhone; if([deviceType isEqualToString:@"iPhone"])
 
27. Which of the following is the correct way to print out stack/trace to the console/log in Cocoa application?
 Answers:
 YES - NSLog(@”%@”,[NSThread callStackSymbols]);
 NO - NSLog(@”%@”,[NSThread callStackReturnAddresses ])
 NO - NSLog(@”%@”,[NSThread currentThread]);
 NO - None of the above.
 
28. Which of the following correctly describes when the — (void)viewDidUnload method is called?
 NO - When the application launches.
 NO - When any view appears.
 YES - When a view is released.
 NO - During low memory conditions when the view controller needs to release its view.
 
29. Which framework can be used to call SOAP web services in iOS applications? //?
 http://sugartin.info/2013/03/12/sending-a-soap-request-using-asihttp-parsing-using-touchxml/
 https://amoghnatu.net/2014/04/26/consuming-soap-web-services-from-ios-objective-c/
 
 //Думаю этот вариант больше подходит
 YES - gSOAP
 YES - ASIHTTP framework
 YES - wsdl2objc framework
 NO - None of these
 
 version2
 
 YES - gSOAP  (100%)
 NO - ASIHTTP framework
 YES - wsdl2objc framework
 NO - None of these
 
30. Which of the following is best JSON library to be used in iOS applications?
 NO - SBJSON
 YES - JSON kit
 NO - Touch JSON
 NO - None of these
 
31. What is the use of performSelector in iOS?
 NO - To add a class delegate
 NO - To define a class
 YES - To call a method of a class
 NO - To add a selector method
 
32. Which CATransfom3D matrix cell is responsible for perspective transforms? (%100)
 http://stackoverflow.com/questions/9946895/catransform3d-transform
 https://discussions.apple.com/thread/1591907?start=0&tstart=0
 http://stackoverflow.com/questions/24585717/catransform3d-no-perspective
 
 NO - transform.m14
 NO - transform.43
 YES - transform.m34
 NO - transform.m24
 
33. What does the "strong" property attribute do?
 NO - It does not extend the lifetime of the object it points to, and automatically becomes nil.
 NO - It specifies a reference that does not keep the referenced object alive and is not set to nil.
 YES - It makes the object alive, as long as there is a strong pointer to it.
 NO - It specifies a reference that does not keep the referenced object alive and is not set to nil.
 
34. Which of the following changes the color of the pagination dots of UIPageControl? //?
 
 думаю этот вариант правльней
 http://stackoverflow.com/questions/2942636/how-can-i-change-the-color-of-pagination-dots-of-uipagecontrol
 
 YES - setPageIndicatorTintColor
 YES - setCurrentPageIndicatorTintColor
 NO - setColor
 YES - A custom page control view implementation
 
 variant 2
 
 NO - setPageIndicatorTintColor
 NO - setCurrentPageIndicatorTintColor
 NO - setColor
 YES - A custom page control view implementation
 
35. Which of the following is the best way to add a UIToolbar above keyboard? //?
 
 Второй вариант актуален только для текстфилда а  вопросе говориться о клавиатуре вообщем
 My version
 YES - -(void)keyboardWillShow:(NSNotification *)notification { [self.view addSubview:toolbar]; }
 NO - -(void)textFieldDidBeginEditing:(UITextField *)textField { [self.view addSubview:toolbar]; } ?
 NO - Always keep UIToolBar visible on screen.
 NO - -(void)keyboardWillHide:(NSNotification *)notification { [self.view addSubview:toolbar]; }
 
 
36. Which of the following will get the position of UIView within the entire UIWindow?
 YES - convertPoint:toView:
 NO - converRect:toView:
 NO - pointInside:withEvent:
 NO - view.window.frame.origin
 
37. Which of the following will set the font of UISegmentedControl? //?
 Maybe More than one answer:
 
 YES - UIFont font = [UIFont boldSystemFontOfSize:12.0f]; NSDictionary attributes = [NSDictionary dictionaryWithObject:font forKey:UITextAttributeFont]; [segmentedControl setTitleTextAttributes:attributes forState:UIControlStateNormal];
 YES -[[UISegmentedControl appearance] setTitleTextAttributes:[NSDictionary dictionaryWithObjectsAndKeys:[UIFont fontWithName:@"STHeitiSC-Medium" size:13.0], UITextAttributeFont, nil] forState:UIControlStateNormal];
 NO - segmentedControl.transform = CGAffineTransformMakeScale(.6f, .6f);
 NO None of these.
 
 my version
 YES - UIFont font = [UIFont boldSystemFontOfSize:12.0f]; NSDictionary attributes = [NSDictionary dictionaryWithObject:font forKey:UITextAttributeFont]; [segmentedControl setTitleTextAttributes:attributes forState:UIControlStateNormal];
 YES-[[UISegmentedControl appearance] setTitleTextAttributes:[NSDictionary dictionaryWithObjectsAndKeys:[UIFont fontWithName:@"STHeitiSC-Medium" size:13.0], UITextAttributeFont, nil] forState:UIControlStateNormal];
 NO - segmentedControl.transform = CGAffineTransformMakeScale(.6f, .6f);
 NO None of these.
 
38. Select all incorrect bundle ID(s): //?
 этот должен быть правильный
 
 NO - com.company.appName
 YES - com.appName
 NO - appName
 NO - com.company-name.app-name
 
 //variant my
 
 NO - com.company.appName
 NO - com.appName
 YES - appName
 NO - com.company-name.app-name

39. Which of the following framework is needed to round corners of UILabel?
 NO - UIKit
 NO - CoreGraphics
 YES - QuartzCore
 NO - CoreAnimation
 
40. Which of the following will return the device’s current location? (100%)
 YES - CLLocationManager locationManager = [[CLLocationManager alloc] init]; [locationManager startUpdatingLocation];
 NO - CLLocationManager locationManager = [[CLLocationManager alloc] init]; [locationManager updateLocation];
 NO - CLLocationManager locationManager = [[CLLocationManager alloc] init]; [locationManager getLocation];
 NO - CLLocationManager locationManager = [[CLLocationManager alloc] init]; [locationManager findLocation];
 
41. Which of the following is best JSON library to be used in iOS applications? //?
 NO - SBJSON
 YES - JSON kit
 NO - Touch JSON
 NO - None of these
 
42. Which of the following is the correct way to vertically center the UITextField text? (100%)
 textField.contentVerticalAlignment = UIControlContentVerticalAlignmentCenter;
 
43. Which of the following programmatically avoids auto-lock? (%100)
 YES - 1 - [[UIAplication sharedAplication] setIdleTimerDisabled:YES]
 
44. How can an alert message/pop-up dialog box be shown in IOS?
 Answers:
 YES - UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@“test message” message:@“test message for application.” delegate:nil cancelButtonTitle:@“OK” otherButtonTitles:nil]; [alert show];
 NO - UIAlertView *alert = [[UIAlertView mess] initWithTitle:@“test message” message:@“test message for application.” delegate:nil cancelButtonTitle:@“OK” otherButtonTitles:nil]; [alert show]; [alert release];
 NO - UIAlertView *alert = [[UIAlertView mess] initWithTitle:@“test message” message:@“test message for application.” delegate:nil cancelButtonTitle:@“OK” otherButtonTitles:nil]; [alert display];
 NO - UIAlertView *alert = [[UIAlertView mess] initWithTitle:@“test message” message:@“test message for application.” delegate:nil cancelButtonTitle:@“OK” otherButtonTitles:nil]; [alert display]; [alert release];
 
45.
 
 */



#endif /* iOSProgrammingTest2016_h */
