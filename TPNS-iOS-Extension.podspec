Pod::Spec.new do |spec|
  spec.name					= 'TPNS-iOS-Extension'
  spec.version					= '1.2.9.0'
  spec.summary					= '腾讯移动推送(iOS)'
  spec.homepage					= 'http://cloud.tencent.com/product/tpns/'
  spec.authors					= 'tencent'
  spec.license					= 'MIT'
  spec.platform					= :ios, '10.0'
  spec.libraries        = 'z', 'sqlite3'
  spec.source					= { :git => 'http://git.code.tencent.com/tpns/XG-CocoaPods.git', :tag => 'TPNS-iOS-V1.2.9.0' }
  spec.source_files				= 'XGVIPPush/extension/XGExtension.h'
  spec.public_header_files = 'XGVIPPush/extension/XGExtension.h'
  spec.vendored_libraries			= 'XGVIPPush/extension/libXGExtension.a'
end
