/* speed.exe 0081f314 FUN_0081f314; analysis pseudocode, not buildable source.
 */

void FUN_0081f314(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x88 + DAT_009c2014;
  pcVar1 = *(code **)(iVar2 + 0x7c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined4 *)(iVar2 + 100),param_2);
  }
  return;
}

