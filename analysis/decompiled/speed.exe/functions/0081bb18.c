/* speed.exe 0081bb18 FUN_0081bb18; analysis pseudocode, not buildable source.
 */

void FUN_0081bb18(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = DAT_009c1b58;
  puVar2 = DAT_009c1b5c;
  if (DAT_009c1b58 != DAT_009c1b60) {
    while (DAT_009c1b60 = iVar3, puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      (*(code *)puVar2[2])(puVar2[3]);
      iVar3 = DAT_009c1b60;
      puVar2 = puVar1;
    }
  }
  return;
}

