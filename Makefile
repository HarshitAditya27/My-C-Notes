.PHONY: clean All

All:
	@echo "----------Building project:[ Functiontemplete - Debug ]----------"
	@"$(MAKE)" -f  "Functiontemplete.mk"
clean:
	@echo "----------Cleaning project:[ Functiontemplete - Debug ]----------"
	@"$(MAKE)" -f  "Functiontemplete.mk" clean
