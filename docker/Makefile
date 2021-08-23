export
SHELL := /bin/bash

SOURCE_DIR := ../

BASE_IMAGE := torcs_client_base_image
BASE_BUILD_IMAGE := torcs_client_build_image
RUNTIME_BASE_IMAGE_TAG := 18.04
RUNTIME_BASE_IMAGE := $(BASE_IMAGE)
CLIENT_RUNTIME_IMAGE_TAG := torcs_client_

LABELS += 	--label org.opencontainers.image.created="$(shell date --rfc-3339=seconds)" \
        	--label org.opencontainers.image.source="$(shell git ls-remote --get-url)" \
        	--label org.opencontainers.image.revision="$(shell git log -1 --format=%H)" \
        	--label org.opencontainers.image.version="$(shell git describe --tags --first-parent --always --dirty)"

.PHONY: help base-image base-build-image run-build-image build-torcs-client

help:
	@echo '------------------------------------'
	@echo '| TORCS Client Docker Makefile'
	@echo '|'
	@echo '| Docker Runtime Image Tag: $(CLIENT_RUNTIME_IMAGE_TAG)'
	@echo '|'
	@echo '------------------------------------'
	@echo '|'
	@echo '| help                Shows this help'
	@echo '|'
	@echo '------------------------------------'

base-image:
	@echo ''
	@echo '$@'
	@echo ''
	@echo ''
	docker build \
	-f docker/Dockerfile.base \
	--network=host \
	-t $(BASE_IMAGE) \
	.

base-build-image: base-image
	@echo ''
	@echo '$@'
	@echo ''
	@echo ''
	docker build \
	--build-arg base_image=${BASE_IMAGE} \
	-f docker/Dockerfile.build \
	--network=host \
	-t $(BASE_BUILD_IMAGE) \
	.
