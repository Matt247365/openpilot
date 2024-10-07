#pragma once

#include <filesystem>
#include <string>

#include <QDateTime>

#include "selfdrive/frogpilot/ui/qt/widgets/frogpilot_controls.h"

inline QMap<QString, QString> northeastMap = {
  {"CT", "Connecticut"}, {"ME", "Maine"}, {"MA", "Massachusetts"},
  {"NH", "New Hampshire"}, {"NJ", "New Jersey"}, {"NY", "New York"},
  {"PA", "Pennsylvania"}, {"RI", "Rhode Island"}, {"VT", "Vermont"}
};

inline QMap<QString, QString> midwestMap = {
  {"IL", "Illinois"}, {"IN", "Indiana"}, {"IA", "Iowa"},
  {"KS", "Kansas"}, {"MI", "Michigan"}, {"MN", "Minnesota"},
  {"MO", "Missouri"}, {"NE", "Nebraska"}, {"ND", "North Dakota"},
  {"OH", "Ohio"}, {"SD", "South Dakota"}, {"WI", "Wisconsin"}
};

inline QMap<QString, QString> southMap = {
  {"AL", "Alabama"}, {"AR", "Arkansas"}, {"DE", "Delaware"},
  {"DC", "District of Columbia"}, {"FL", "Florida"}, {"GA", "Georgia"},
  {"KY", "Kentucky"}, {"LA", "Louisiana"}, {"MS", "Mississippi"},
  {"NC", "North Carolina"}, {"OK", "Oklahoma"}, {"SC", "South Carolina"},
  {"TN", "Tennessee"}, {"TX", "Texas"}, {"VA", "Virginia"},
  {"WV", "West Virginia"}
};

inline QMap<QString, QString> westMap = {
  {"AK", "Alaska"}, {"AZ", "Arizona"}, {"CA", "California"},
  {"CO", "Colorado"}, {"HI", "Hawaii"}, {"ID", "Idaho"},
  {"MT", "Montana"}, {"NV", "Nevada"}, {"NM", "New Mexico"},
  {"OR", "Oregon"}, {"UT", "Utah"}, {"WA", "Washington"},
  {"WY", "Wyoming"}
};

inline QMap<QString, QString> territoriesMap = {
  {"AS", "American Samoa"}, {"GU", "Guam"}, {"MP", "Northern Mariana Islands"},
  {"PR", "Puerto Rico"}, {"VI", "Virgin Islands"}
};

inline QMap<QString, QString> africaMap = {
  {"DZ", "Algeria"}, {"AO", "Angola"}, {"BJ", "Benin"}, {"BW", "Botswana"},
  {"BF", "Burkina Faso"}, {"BI", "Burundi"}, {"CM", "Cameroon"}, {"CV", "Cape Verde"},
  {"CF", "Central African Republic"}, {"CE", "Ceuta"}, {"TD", "Chad"},
  {"KM", "Comoros"}, {"CG", "Congo-Brazzaville"}, {"CD", "Congo-Kinshasa"},
  {"CI", "Côte d'Ivoire"}, {"DJ", "Djibouti"}, {"EG", "Egypt"},
  {"GQ", "Equatorial Guinea"}, {"ER", "Eritrea"}, {"SZ", "Eswatini"},
  {"ET", "Ethiopia"}, {"GA", "Gabon"}, {"GM", "Gambia"}, {"GH", "Ghana"},
  {"GN", "Guinea"}, {"GW", "Guinea-Bissau"}, {"KE", "Kenya"},
  {"LS", "Lesotho"}, {"LR", "Liberia"}, {"LY", "Libya"},
  {"MG", "Madagascar"}, {"MW", "Malawi"}, {"ML", "Mali"}, {"MR", "Mauritania"},
  {"MU", "Mauritius"}, {"YT", "Mayotte"}, {"ML", "Melilla"},
  {"MA", "Morocco"}, {"MZ", "Mozambique"}, {"NA", "Namibia"}, {"NE", "Niger"}, {"NG", "Nigeria"},
  {"RE", "La Réunion"}, {"RW", "Rwanda"},
  {"SH", "Saint Helena, Ascension and Tristan da Cunha"}, {"ST", "São Tomé and Príncipe"},
  {"SN", "Senegal"}, {"SC", "Seychelles"}, {"SL", "Sierra Leone"},
  {"SO", "Somalia"}, {"ZA", "South Africa"}, {"SS", "South Sudan"},
  {"SD", "Sudan"}, {"TZ", "Tanzania"}, {"TG", "Togo"}, {"TN", "Tunisia"},
  {"UG", "Uganda"}, {"EH", "Western Sahara"}, {"ZM", "Zambia"},
  {"ZW", "Zimbabwe"}
};

inline QMap<QString, QString> antarcticaMap = {
  {"AQ", "Antarctica"}
};

inline QMap<QString, QString> asiaMap = {
  {"AF", "Afghanistan"}, {"AM", "Armenia"}, {"AZ", "Azerbaijan"},
  {"BH", "Bahrain"}, {"BD", "Bangladesh"}, {"BT", "Bhutan"},
  {"BN", "Brunei"}, {"KH", "Cambodia"}, {"CN", "China"},
  {"CY", "Cyprus"}, {"TL", "Timor-Leste"}, {"GE", "Georgia"},
  {"HK", "Hong Kong"}, {"IN", "India"}, {"ID", "Indonesia"},
  {"IR", "Iran"}, {"IQ", "Iraq"}, {"IL", "Israel"}, {"JP", "Japan"},
  {"JO", "Jordan"}, {"KZ", "Kazakhstan"}, {"KW", "Kuwait"},
  {"KG", "Kyrgyzstan"}, {"LA", "Laos"}, {"LB", "Lebanon"},
  {"MO", "Macau"}, {"MY", "Malaysia"}, {"MV", "Maldives"},
  {"MN", "Mongolia"}, {"MM", "Myanmar"}, {"NP", "Nepal"},
  {"KP", "North Korea"}, {"OM", "Oman"}, {"PK", "Pakistan"},
  {"PS", "Palestine"}, {"PH", "Philippines"}, {"QA", "Qatar"},
  {"RU", "Russia"}, {"SA", "Saudi Arabia"}, {"SG", "Singapore"},
  {"KR", "South Korea"}, {"LK", "Sri Lanka"}, {"SY", "Syria"},
  {"TW", "Taiwan"}, {"TJ", "Tajikistan"}, {"TH", "Thailand"},
  {"TR", "Turkey"}, {"TM", "Turkmenistan"}, {"AE", "United Arab Emirates"},
  {"UZ", "Uzbekistan"}, {"VN", "Vietnam"}, {"YE", "Yemen"}
};

inline QMap<QString, QString> europeMap = {
  {"AL", "Albania"}, {"AD", "Andorra"}, {"AM", "Armenia"},
  {"AT", "Austria"}, {"AZ", "Azerbaijan"}, {"BY", "Belarus"},
  {"BE", "Belgium"}, {"BA", "Bosnia and Herzegovina"}, {"BG", "Bulgaria"},
  {"HR", "Croatia"}, {"CY", "Cyprus"}, {"CZ", "Czech Republic"},
  {"DK", "Denmark"}, {"EE", "Estonia"}, {"FI", "Finland"},
  {"FR", "France"}, {"GE", "Georgia"}, {"DE", "Germany"},
  {"GI", "Gibraltar"}, {"GR", "Greece"}, {"GG", "Guernsey"},
  {"HU", "Hungary"}, {"IS", "Iceland"}, {"IE", "Ireland"},
  {"IM", "Isle of Man"}, {"IT", "Italy"}, {"JE", "Jersey"},
  {"LV", "Latvia"}, {"LI", "Liechtenstein"}, {"LT", "Lithuania"},
  {"LU", "Luxembourg"}, {"MT", "Malta"}, {"MD", "Moldova"},
  {"MC", "Monaco"}, {"ME", "Montenegro"}, {"NL", "Netherlands"},
  {"MK", "North Macedonia"}, {"NO", "Norway"}, {"PL", "Poland"},
  {"PT", "Portugal"}, {"RO", "Romania"}, {"RU", "Russia"},
  {"SM", "San Marino"}, {"RS", "Serbia"}, {"SK", "Slovakia"},
  {"SI", "Slovenia"}, {"ES", "Spain"}, {"SJ", "Svalbard and Jan Mayen"},
  {"SE", "Sweden"}, {"CH", "Switzerland"}, {"UA", "Ukraine"},
  {"GB", "United Kingdom"}, {"VA", "Vatican City"}
};

inline QMap<QString, QString> northAmericaMap = {
  {"AG", "Antigua and Barbuda"}, {"AI", "Anguilla"}, {"AW", "Aruba"},
  {"BS", "Bahamas"}, {"BB", "Barbados"}, {"BZ", "Belize"},
  {"BM", "Bermuda"}, {"CA", "Canada"}, {"KY", "Cayman Islands"},
  {"CR", "Costa Rica"}, {"CU", "Cuba"}, {"CW", "Curaçao"},
  {"DM", "Dominica"}, {"DO", "Dominican Republic"}, {"SV", "El Salvador"},
  {"GL", "Greenland"}, {"GD", "Grenada"}, {"GP", "Guadeloupe"},
  {"GT", "Guatemala"}, {"HT", "Haiti"}, {"HN", "Honduras"},
  {"JM", "Jamaica"}, {"MX", "Mexico"}, {"MS", "Montserrat"},
  {"NI", "Nicaragua"}, {"PA", "Panama"}, {"KN", "Saint Kitts and Nevis"},
  {"LC", "Saint Lucia"}, {"VC", "Saint Vincent and the Grenadines"},
  {"SX", "Sint Maarten"}, {"TT", "Trinidad and Tobago"},
  {"TC", "Turks and Caicos Islands"}, {"US", "United States"},
  {"VG", "British Virgin Islands"}, {"VI", "United States Virgin Islands"}
};

inline QMap<QString, QString> oceaniaMap = {
  {"AS", "American Samoa"}, {"AU", "Australia"}, {"CK", "Cook Islands"},
  {"FJ", "Fiji"}, {"PF", "French Polynesia"}, {"GU", "Guam"},
  {"KI", "Kiribati"}, {"MH", "Marshall Islands"}, {"FM", "Micronesia"},
  {"NR", "Nauru"}, {"NC", "New Caledonia"}, {"NZ", "New Zealand"},
  {"NU", "Niue"}, {"NF", "Norfolk Island"}, {"MP", "Northern Mariana Islands"},
  {"PW", "Palau"}, {"PG", "Papua New Guinea"}, {"PN", "Pitcairn Islands"},
  {"WS", "Samoa"}, {"SB", "Solomon Islands"}, {"TK", "Tokelau"},
  {"TO", "Tonga"}, {"TV", "Tuvalu"}, {"VU", "Vanuatu"},
  {"WF", "Wallis and Futuna"}
};

inline QMap<QString, QString> southAmericaMap = {
  {"AR", "Argentina"}, {"BO", "Bolivia"}, {"BR", "Brazil"},
  {"CL", "Chile"}, {"CO", "Colombia"}, {"EC", "Ecuador"},
  {"FK", "Falkland Islands"}, {"GF", "French Guiana"},
  {"GY", "Guyana"}, {"PY", "Paraguay"}, {"PE", "Peru"},
  {"SR", "Suriname"}, {"GS", "South Georgia and the South Sandwich Islands"},
  {"UY", "Uruguay"}, {"VE", "Venezuela"}
};

namespace fs = std::filesystem;

inline bool isMapdRunning() {
  return std::system("pgrep mapd > /dev/null 2>&1") == 0;
}

inline QString calculateDirectorySize(const QString &directoryPath) {
  constexpr uintmax_t oneGB = 1024 * 1024 * 1024;
  constexpr uintmax_t oneMB = 1024 * 1024;

  uintmax_t totalSize = 0;
  fs::path path(directoryPath.toStdString());

  if (!fs::exists(path) || !fs::is_directory(path)) {
    return "0 MB";
  }

  for (fs::recursive_directory_iterator iter(path, fs::directory_options::skip_permission_denied), end; iter != end; ++iter) {
    const fs::directory_entry &entry = *iter;
    if (entry.is_regular_file()) {
      totalSize += entry.file_size();
    }
  }

  if (totalSize >= oneGB) {
    return QString::number(static_cast<double>(totalSize) / oneGB, 'f', 2) + " GB";
  } else {
    return QString::number(static_cast<double>(totalSize) / oneMB, 'f', 2) + " MB";
  }
}

inline QString formatCurrentDate() {
  QDate currentDate = QDate::currentDate();
  QString suffix;
  int day = currentDate.day();

  if (day % 10 == 1 && day != 11) {
    suffix = "st";
  } else if (day % 10 == 2 && day != 12) {
    suffix = "nd";
  } else if (day % 10 == 3 && day != 13) {
    suffix = "rd";
  } else {
    suffix = "th";
  }

  return currentDate.toString("MMMM d'") + suffix + QString(", %1").arg(currentDate.year());
}

inline QString formatElapsedTime(qint64 elapsedMilliseconds) {
  qint64 totalSeconds = elapsedMilliseconds / 1000;
  qint64 hours = totalSeconds / 3600;
  qint64 minutes = (totalSeconds % 3600) / 60;
  qint64 seconds = totalSeconds % 60;

  QString formattedTime;
  if (hours > 0) {
    formattedTime += QString::number(hours) + (hours == 1 ? " hour " : " hours ");
  }
  if (minutes > 0) {
    formattedTime += QString::number(minutes) + (minutes == 1 ? " minute " : " minutes ");
  }
  formattedTime += QString::number(seconds) + (seconds == 1 ? " second" : " seconds");

  return formattedTime;
}

class MapSelectionControl : public QWidget {
  Q_OBJECT

public:
  MapSelectionControl(const QMap<QString, QString> &map, bool isCountry = false, QWidget *parent = nullptr);

private:
  void loadSelectedMaps();
  void updateSelectedMaps();

  Params params;

  QButtonGroup *buttonGroup;

  QGridLayout *gridLayout;

  QMap<QString, QString> mapData;

  bool isCountry;
};
