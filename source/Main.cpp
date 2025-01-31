#include <JuceHeader.h>

class MyJUCEApp : public juce::JUCEApplication {
public:
    MyJUCEApp() {}

    const juce::String getApplicationName() override { return "MyJUCEProject"; }
    const juce::String getApplicationVersion() override { return "1.0.0"; }

    void initialise(const juce::String& commandLine) override {
        juce::Logger::writeToLog("Hello, JUCE!");
    }

    void shutdown() override {
        juce::Logger::writeToLog("Goodbye, JUCE!");
    }
};

START_JUCE_APPLICATION(MyJUCEApp)
