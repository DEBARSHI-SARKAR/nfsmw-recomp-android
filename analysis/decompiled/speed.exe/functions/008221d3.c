/* speed.exe 008221d3 FUN_008221d3; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 0082221f FUN_0082221f
 */

size_t FUN_008221d3(void *param_1,int param_2)

{
  size_t _Size;
  
  if (DAT_009c2188 != '\0') {
    _Size = FUN_0082221f(param_2);
    if (-1 < (int)_Size) {
      FID_conflict__memcpy(param_1,*(void **)(param_2 * 8 + DAT_009c21f8),_Size);
      *(void **)(param_2 * 8 + DAT_009c21f8) = param_1;
      _Size = 0;
    }
    return _Size;
  }
  return 0xfffffff6;
}

