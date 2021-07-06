Pod::Spec.new do |spec|
  spec.name                                        = 'TPNS-iOS'
  spec.version                                        = '1.3.3.0'
  spec.summary                                        = '腾讯移动推送(iOS)'
  spec.homepage                                        = "https://cloud.tencent.com/product/tpns/"
  spec.authors                                        = 'tencent'
  spec.license                                        = 'MIT'
  spec.platform                                        = :ios, '8.0'
  spec.frameworks                                = 'CFNetwork', 'SystemConfiguration', 'CoreTelephony', 'CoreGraphics', 'Foundation', 'UserNotifications', 'CoreData'
  spec.libraries                                = 'z', 'sqlite3'
  spec.source                                          = { :git => 'http://git.code.tencent.com/tpns/XG-CocoaPods.git', :tag => 'TPNS-iOS-V1.3.3.0' }
  spec.source_files                        = 'XGVIPPush/XGLocalNotification.h', 'XGVIPPush/XGPush.h', 'XGVIPPush/XGPushPrivate.h'
  spec.resource         = 'XGVIPPush/InAppMessage/TPNSInAppMessageResource.bundle'
  spec.vendored_libraries  = 'XGVIPPush/libXG-SDK-Cloud.a'
  spec.vendored_frameworks = 'XGVIPPush/XGMTACloud.framework', 'XGVIPPush/InAppMessage/TPNSInAppMessage.framework'
end