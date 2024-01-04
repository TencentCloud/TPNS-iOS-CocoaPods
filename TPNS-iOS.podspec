Pod::Spec.new do |spec|
  spec.name                                        = 'TPNS-iOS'
  spec.version                                        = '1.4.0.0'
  spec.summary                                        = '腾讯移动推送(iOS)'
  spec.homepage                                        = "https://cloud.tencent.com/product/tpns"
  spec.authors                                        = 'tencent'
  spec.license                                        = 'MIT'
  spec.platform                                        = :ios, '9.0'
  spec.frameworks                                = 'CFNetwork', 'SystemConfiguration', 'CoreTelephony', 'CoreGraphics', 'Foundation', 'UserNotifications', 'CoreData'
  spec.libraries                                = 'z', 'sqlite3'
  spec.source                                          = { :git => 'https://github.com/TencentCloud/TPNS-iOS-CocoaPods.git', :branch => 'V1.4.0.0' }
  spec.source_files                        = 'XGVIPPush/XGLocalNotification.h', 'XGVIPPush/XGPush.h', 'XGVIPPush/XGPushPrivate.h', 'XGVIPPush/XGVoIPService.h'
  spec.vendored_libraries  = 'XGVIPPush/libXG-SDK-Cloud.a'
  spec.vendored_frameworks = 'XGVIPPush/XGMTACloud.framework', 'XGVIPPush/InAppMessage/XGInAppMessage.framework'
end