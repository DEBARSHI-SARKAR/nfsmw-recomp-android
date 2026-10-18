/* speed.exe 0085e0a0 FUN_0085e0a0; analysis pseudocode, not buildable source.
 * calls 007cb270 FUN_007cb270
 * calls EXTERNAL:0000002a FindClose
 */

undefined4 FUN_0085e0a0(HANDLE param_1)

{
  BOOL BVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  BVar1 = FindClose(param_1);
  if (BVar1 == 0) {
    puVar2 = (undefined4 *)FUN_007cb270();
    *puVar2 = 0x16;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

