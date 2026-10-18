/* speed.exe 005ed960 FUN_005ed960; analysis pseudocode, not buildable source.
 * calls 005ec490 FUN_005ec490
 */

int __thiscall FUN_005ed960(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int local_4;
  
  param_2 = param_2 >> ((byte)*(undefined4 *)(param_1 + 0x60) & 0x1f);
  uVar2 = 0;
  local_4 = param_1;
  while( true ) {
    iVar1 = param_1 + 300;
    if (uVar2 == 0) {
      iVar1 = param_1 + 0x138;
    }
    FUN_005ec490(&local_4,&param_2);
    if (local_4 != *(int *)(iVar1 + 4)) break;
    uVar2 = uVar2 + 1;
    if (1 < uVar2) {
      return 0;
    }
  }
  return *(int *)(local_4 + 0x10) + 8;
}

