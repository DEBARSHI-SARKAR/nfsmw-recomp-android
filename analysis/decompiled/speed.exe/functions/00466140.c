/* speed.exe 00466140 FUN_00466140; analysis pseudocode, not buildable source.
 * calls 004653d0 FUN_004653d0
 * calls 004655f0 FUN_004655f0
 */

undefined1 FUN_00466140(uint param_1,char param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (param_2 == '\0') {
    uVar2 = FUN_004653d0(0x10,0,0,param_1 & 0xf | 0x40);
    uVar1 = *(undefined1 *)((&DAT_0090df10)[param_1] + 0x41);
    *(undefined1 *)((&DAT_0090df10)[param_1] + 0x41) = 0;
    FUN_004655f0(uVar2);
    return uVar1;
  }
  uVar1 = *(undefined1 *)((&DAT_0090df10)[param_1] + 0x41);
  *(char *)((&DAT_0090df10)[param_1] + 0x41) = param_2;
  return uVar1;
}

