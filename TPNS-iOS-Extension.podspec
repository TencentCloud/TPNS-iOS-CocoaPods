Pod::Spec.new do |spec|
  spec.name					       = 'TPNS-iOS-Extension'
  spec.version					   = '1.4.0.1'
  spec.summary					   = '腾讯移动推送(iOS)'
  spec.homepage					   = 'https://cloud.tencent.com/product/tpns'
  spec.authors					   = 'tencent'
  spec.license					   = 'MIT'
  spec.platform					   = :ios, '10.0'
  spec.libraries           = 'z'
  spec.source					     = { :git => 'https://github.com/TencentCloud/TPNS-iOS-CocoaPods', :branch => 'V1.4.0.1' }
  spec.source_files				 = 'XGVIPPush/XGPushStatistics/extension/XGExtension.h'
  spec.vendored_libraries	 = 'XGVIPPush/XGPushStatistics/extension/libXGExtension.a'
  spec.resource_bundles       = {'TPNS-iOS-Extension' => ['XGVIPPush/XGPushStatistics/extension/PrivacyInfo.xcprivacy']}
end
