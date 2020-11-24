SRC += jennykinns.c \
       process_records.c

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
    SRC += jennykinns_tapDances.c
endif

ifeq ($(strip $(OLED_DRIVER_ENABLE)), yes)
    SRC += jennykinns_oled.c
endif

ifeq ($(strip $(ENCODER_ENABLE)), yes)
    SRC += jennykinns_encoder.c
endif

