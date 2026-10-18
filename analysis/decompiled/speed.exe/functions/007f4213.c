/* speed.exe 007f4213 FUN_007f4213; analysis pseudocode, not buildable source.
 * calls 0085dba0 _localtime
 */

int FUN_007f4213(int param_1)

{
  tm *ptVar1;
  uint uVar2;
  uint uVar3;
  
  if (-1 < param_1) {
    ptVar1 = _localtime((time_t *)&param_1);
    uVar2 = ptVar1->tm_year - 100;
    if ((uVar2 & 3) == 0) {
      uVar3 = uVar2 >> 2;
      if (ptVar1->tm_mon < 2) {
        uVar3 = uVar3 - 1;
      }
    }
    else {
      uVar3 = uVar2 >> 2;
    }
    return (uVar3 + 1) * 0x15180 +
           ((ptVar1->tm_hour + (uVar2 * 0x16d + ptVar1->tm_yday) * 0x18) * 0x3c + ptVar1->tm_min) *
           0x3c + ptVar1->tm_sec;
  }
  return 0;
}

