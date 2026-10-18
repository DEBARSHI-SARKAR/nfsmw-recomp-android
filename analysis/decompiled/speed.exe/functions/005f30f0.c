/* speed.exe 005f30f0 FUN_005f30f0; analysis pseudocode, not buildable source.
 * calls 005ec490 FUN_005ec490
 * calls 005f1dd0 FUN_005f1dd0
 */

void __thiscall FUN_005f30f0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int local_8;
  undefined1 local_4 [4];
  
  param_2 = param_2 >> ((byte)*(undefined4 *)(param_1 + 0x60) & 0x1f);
  uVar2 = 0;
  do {
    iVar1 = param_1 + 300;
    if (uVar2 == 0) {
      iVar1 = param_1 + 0x138;
    }
    FUN_005ec490(&local_8,&param_2);
    if (local_8 != *(int *)(iVar1 + 4)) {
      FUN_005f1dd0(local_4,local_8);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return;
}

