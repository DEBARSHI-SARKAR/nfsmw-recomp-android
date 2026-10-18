PYTHON ?= .venv/bin/python

.PHONY: help all stub test format format-check recomp recomp-tests recomp-mods recomp-smoke
help:
	@echo 'Prepare: see CONTRIBUTING.md (requires your own game installation)'
	@echo 'Build:   make all (tools/build.py over CMake); make stub links the hosts without game code'
	@echo 'Presets: tools/build.py --preset macos|linux|windows --config Release|Debug'
	@echo 'Check:   make test / make format-check'
	@echo 'Native:  make recomp-tests / make recomp-mods'

all recomp:
	$(PYTHON) tools/build.py

stub:
	$(PYTHON) tools/build.py --stub

test:
	$(PYTHON) tools/test.py

format:
	$(PYTHON) tools/format.py --write

format-check:
	$(PYTHON) tools/format.py

recomp-tests:
	$(PYTHON) tools/test.py --native

recomp-mods:
	$(PYTHON) tools/test.py --mods

recomp-smoke:
	$(PYTHON) tools/build.py --target smoke
