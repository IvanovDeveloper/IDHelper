#
# Be sure to run `pod lib lint IDHelper.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'IDHelper'
  s.version          = '0.1.0'
  s.summary          = 'Ready objective-C solution for developing code'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
Ready objective-C solution for developing code. It will be macroses or methods.
                       DESC

  s.homepage         = 'https://github.com/IvanovDeveloper/IDHelper'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Ivanov Developer' => 'ivanov.developer@mail.ru' }
  s.source           = { :git => 'https://github.com/IvanovDeveloper/IDHelper.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'IDHelper/Classes/**/*'
  
  # s.resource_bundles = {
  #   'IDHelper' => ['IDHelper/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
