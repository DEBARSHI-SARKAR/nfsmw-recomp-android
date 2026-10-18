/* speed.exe 004fc800 FUN_004fc800; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fc800(void)

{
  _DAT_0091c194 = _DAT_0091c194 + DAT_00925970;
  _DAT_0091c198 = _DAT_0091c198 + DAT_00925970;
  _DAT_0091c19c = _DAT_0091c19c + DAT_00925970;
  if (_DAT_008933d4 < _DAT_0091c194) {
    DAT_0091601c = ~DAT_0091601c;
    _DAT_0091c194 = 0.0;
  }
  if (_DAT_00891054 < _DAT_0091c198) {
    DAT_00916020 = ~DAT_00916020;
    _DAT_0091c198 = 0.0;
  }
  DAT_00916018 = 0;
  if (_DAT_00899d6c < _DAT_0091c19c) {
    DAT_00916024 = ~DAT_00916024;
    _DAT_0091c19c = 0.0;
  }
  return;
}

