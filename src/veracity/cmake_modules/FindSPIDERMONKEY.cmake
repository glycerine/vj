FIND_PATH(SPIDERMONKEY_INCLUDE_DIR NAMES js/jsapi.h)
MARK_AS_ADVANCED(SPIDERMONKEY_INCLUDE_DIR)
FIND_LIBRARY(SPIDERMONKEY_LIB NAMES mozjs185 mozjs185-1.0)
MARK_AS_ADVANCED(SPIDERMONKEY_LIB)

