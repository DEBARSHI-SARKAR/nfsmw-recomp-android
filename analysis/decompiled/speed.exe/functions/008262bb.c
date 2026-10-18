/* speed.exe 008262bb FUN_008262bb; analysis pseudocode, not buildable source.
 */

undefined4 FUN_008262bb(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1 * 0x5c + DAT_009c2520;
  pcVar1 = *(code **)(iVar2 + 0x44);
  if (pcVar1 != (code *)0x0) {
    uVar3 = (*pcVar1)(*(undefined4 *)(iVar2 + 0x48));
    return uVar3;
  }
  return 0xffffffff;
}

