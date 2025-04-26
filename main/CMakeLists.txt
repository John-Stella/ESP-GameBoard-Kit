idf_component_register(SRCS "main.c"
                            "include/EEZ/ui.c"
                            "include/EEZ/eez-flow.cpp"
                            "include/EEZ/images.c"
                            "include/EEZ/screens.c"
                            "include/EEZ/styles.c"
                            "include/win_check.c"
                            "include/EEZ/vars.c"
                    INCLUDE_DIRS "." include include/EEZ
                    REQUIRES espressif__esp32_p4_function_ev_board)
