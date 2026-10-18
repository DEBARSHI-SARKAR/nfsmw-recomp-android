/* speed.exe 0081f2f1 FUN_0081f2f1; analysis pseudocode, not buildable source.
 */

void FUN_0081f2f1(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x88 + DAT_009c2014;
  pcVar1 = *(code **)(iVar2 + 0x78);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined4 *)(iVar2 + 0x60),param_2);
  }
  return;
}

