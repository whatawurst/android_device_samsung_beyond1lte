/*
 * Copyright (C) 2019 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SAMSUNG_FINGERPRINT_INSCREEN_H
#define SAMSUNG_FINGERPRINT_INSCREEN_H

/**
 * Information on the position of the scanner
 * Note: X and Y are the left-upper corner of the
 * FOD view, not the center.
 */

/*
 * WIDTH = 1440
 * X = (WIDTH / 2) - (FOD_SENSOR_SIZE / 2)
 */
#define FOD_SENSOR_X        545

/*
 * HEIGHT = 3040
 * Y = ???
 */
#define FOD_SENSOR_Y        2500

/* Sensor rectangle size  */
#define FOD_SENSOR_SIZE     350

#define FOD_ENABLE "fod_enable,1"
#define FOD_DISABLE "fod_enable,0"

#define FINGERPRINT_ACQUIRED_VENDOR 6
#define VENDORCODE_FINGER_DOWN 9002
#define VENDORCODE_FINGER_UP 9001

#define TSP_CMD_PATH "/sys/class/sec/tsp/cmd"

#endif  // SAMSUNG_FINGERPRINT_INSCREEN_H
