#ifndef SETTINGS_H
#define SETTINGS_H

#include <QObject>


enum ShaderProgramSetting
{
    SOLID_SHADER_PROGRAM,
    GRADIENT_SHADER_PROGRAM,
    TEXTURE_SHADER_PROGRAM,
    NUM_SHADER_PROGRAMS
};

/**

    @struct Settings
    @brief  Stores application settings for the CS123 GUI.

    You can access all app settings through the "settings" global variable.
    The settings will be automatically updated when things are changed in the
    GUI (the reverse is not true however: changing the value of a setting does
    not update the GUI).

*/
struct Settings {
    // Loads settings from disk, or fills in default values if no saved settings exist.
    void loadSettingsOrDefaults();

    // Saves the current settings to disk.
    void saveSettings();

    int shaderProgram;  // The currently selected shader program.

    bool linesEnabled;  // Enable or disable drawing only lines.
};

// The global Settings object, will be initialized by MainWindow
extern Settings settings;

#endif // SETTINGS_H
