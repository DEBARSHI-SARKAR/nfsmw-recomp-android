/* speed.exe 0081f1e2 FUN_0081f1e2; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0081f1e2(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x88 + DAT_009c2014;
  pcVar1 = *(code **)(iVar2 + 0x70);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined4 *)(iVar2 + 0x5c),param_2);
  }
  return 0;
}

