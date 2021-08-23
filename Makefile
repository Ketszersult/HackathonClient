export
SHELL := /bin/bash
MAKEFLAGS += --no-print-directory

TORCS_CLIENT_REPO := $(shell git ls-remote --get-url)

.PHONY: help

help:
	@echo '------------------------------------'
	@echo '| TORCS Client Makefile'
	@echo '|'
	@echo '| Source of TORCS Client: $(TORCS_CLIENT_REPO)'
	@echo '|'
	@echo '------------------------------------'
	@echo '|'
	@echo '| help       	Shows this help'
	@echo '| win        	Builds Windows Client'
	@echo '| win-clean      Clean Builds Windows Client'
	@echo '| linux      	Builds Linux Client'
	@echo '| linux-clean    Clean Builds Linux Client'

win: 
	@echo ''
	@echo '$@'
	@echo ''
	@echo ''
	make -f Makefile.win 2>&1 | tee make.win.log

win-clean: 
	@echo ''
	@echo '$@'
	@echo ''
	@echo ''
	make -f Makefile.win clean 2>&1 | tee make.win.log

linux: 
	@echo ''
	@echo '$@'
	@echo ''
	@echo ''
	make -f Makefile.linux 2>&1 | tee make.linux.log

linux-clean:
	@echo ''
	@echo '$@'
	@echo ''
	@echo ''
	make -f Makefile.linux  clean 2>&1 | tee make.linux.log

	
