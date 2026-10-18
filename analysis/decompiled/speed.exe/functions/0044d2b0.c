/* speed.exe 0044d2b0 FUN_0044d2b0; analysis pseudocode, not buildable source.
 * calls 0044b9c0 FUN_0044b9c0
 * calls 00652ad0 _malloc
 */

void FUN_0044d2b0(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[2] != 0) {
    iVar3 = 0;
    do {
      if ((undefined4 *)param_1[iVar3] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[iVar3])(1);
      }
      param_1[iVar3] = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar3 = 0;
  do {
    if (iVar3 == 1) {
      pvVar1 = _malloc(4);
      if (pvVar1 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0044b9c0();
      }
      param_1[1] = uVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return;
}

