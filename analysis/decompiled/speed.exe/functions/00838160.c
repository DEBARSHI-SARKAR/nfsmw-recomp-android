/* speed.exe 00838160 FUN_00838160; analysis pseudocode, not buildable source.
 */

bool FUN_00838160(int *param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(*param_1 + 0xf8);
  if (((uVar1 >> 2 & 1) == 0) && ((uVar1 & 0x200) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return !bVar2 && (uVar1 & 0xc0000) == 0;
}

