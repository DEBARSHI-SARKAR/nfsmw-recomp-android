/* speed.exe 0078d4f0 FUN_0078d4f0; analysis pseudocode, not buildable source.
 * calls 008438f0 FUN_008438f0
 * calls 00843c60 FUN_00843c60
 * calls 00842cf0 FUN_00842cf0
 */

void __fastcall FUN_0078d4f0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_924 [1092];
  char cStack_4e0;
  char cStack_4b3;
  char cStack_486;
  char cStack_459;
  
  iVar2 = (**(code **)(*param_1 + 0x20))();
  if (iVar2 < 10) {
    FUN_008438f0(param_1[1],auStack_924);
    if (((((iVar2 == 1) || (cStack_4e0 = cStack_4b3, iVar2 == 2)) ||
         (cStack_4e0 = cStack_486, iVar2 == 3)) || (cStack_4e0 = cStack_459, iVar2 == 4)) &&
       ((cStack_4e0 == '^' && (cVar1 = (**(code **)(*param_1 + 0x44))(auStack_924), cVar1 != '\0')))
       ) {
      FUN_00843c60(param_1[1],auStack_924);
    }
    FUN_00842cf0(param_1[1],iVar2);
    *(undefined1 *)(param_1 + 0x3c) = 0;
    (**(code **)(*param_1 + 0x34))();
  }
  return;
}

