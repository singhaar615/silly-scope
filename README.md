# STM32 Embedded Oscilloscope

A two-channel oscilloscope project focused on embedded C, STM32 peripherals, SPI communication, and hardware prototyping.

**Platform:** STM32 NUCLEO-L432KC  
**Status:** In development

## Overview

This project explores the full embedded development process, from schematic planning and peripheral configuration to firmware integration and bench testing.

The planned system acquires two analog channels, displays one selected channel on a graphical LCD, and records samples to a PC. The final deliverable is a **Nucleo-based prototype**, supported by a standalone MCU schematic and BOM as a design study.

> Features below are planned or under development. Performance measurements and demonstrations are pending validation.

## Planned Features

- Two analog input channels with channel selection.
- Accurate up to 500 kHz
- SPI graphical LCD for waveform display.
- Push-button controls for channel selection and recording.
- Power, channel activity, and recording indicators.
- PC sample logging with documented channel and timing information.

## Hardware

- **MCU board:** STM32 NUCLEO-L432KC.
- **Display:** ERM19296-1 LCD with ST75256 controller; exact variant and wiring to be confirmed.
- **Controls:** Push buttons and status LEDs.
- **Inputs:** Low-voltage signals referenced to prototype ground.

The nominal input range is 0–3.3 V, subject to verified ADC limits. Input attenuation, negative-voltage handling, isolation, and overvoltage protection are not assumed.

The standalone design study covers power regulation, decoupling, reset/boot circuitry, SWD access, and peripheral connections. PCB fabrication is outside the project scope.

## Firmware

Firmware development focuses on:

- ADC acquisition, channel sequencing, and sample buffering.
- SPI display initialization and waveform rendering.
- Button debouncing and application state management.
- PC communication and recording.
- Coordinating acquisition with display and logging tasks.

ADC triggering, polling/interrupt/DMA use, buffer sizes, and PC transport will be documented with the tested implementation.

**Tools:** Embedded C, STM32CubeMX, STM32 development/debug tools, and logic-analyzer measurements.

## Planned Repository Structure

| Folder | Contents |
| --- | --- |
| `Firmware/` | C source, CubeMX configuration, and build files |
| `Hardware/` | Prototype wiring, standalone schematic, and separate BOMs |
| `Docs/` | Requirements, architecture, interfaces, and operating instructions |
| `Tests/` | Test procedures, results, and measurement captures |
| `Tools/` | Host-side logging or plotting utilities |
| `Data/examples/` | Sample recordings |
| `Media/` | Photos, screenshots, and demonstrations |

## Validation and Next Steps

- [ ] Finalize requirements and pin assignments.
- [ ] Bring up the LCD, buttons, and indicators.
- [ ] Validate ADC readings with known signals.
- [ ] Integrate channel selection and waveform rendering.
- [ ] Implement and verify PC recording.
- [ ] Measure sampling timing, voltage accuracy, display refresh, and logging throughput.
- [ ] Test concurrent operation, buffer handling, and sample loss.
- [ ] Publish build instructions, results, and a demonstration.

Hardware references, tool versions, and third-party code attribution will accompany the implementation.
