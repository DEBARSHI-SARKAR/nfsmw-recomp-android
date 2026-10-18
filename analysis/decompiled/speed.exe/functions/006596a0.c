/* speed.exe 006596a0 FUN_006596a0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006596a0(int *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  pcVar2 = (code *)*param_1;
  do {
    if (pcVar2 == (code *)0x0) break;
    iVar1 = param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    (*pcVar2)(iVar1);
    bVar3 = (code *)*param_1 != pcVar2;
    pcVar2 = (code *)*param_1;
  } while (bVar3);
  if ((code *)param_1[3] != (code *)0x0) {
    (*(code *)param_1[3])();
  }
  return;
}

