/* speed.exe 007a2850 FUN_007a2850; analysis pseudocode, not buildable source.
 * calls 0075bad0 FUN_0075bad0
 * calls 007488b0 FUN_007488b0
 */

void __fastcall FUN_007a2850(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(char *)(param_1 + 0x188) != '\0') {
    iVar2 = FUN_007488b0(param_1[0x189]);
    if (iVar2 != 0) {
      if (*(char *)((int)param_1 + 0x621) != '\0') {
        FUN_0075bad0(param_1[0x18a]);
      }
      uVar1 = param_1[0x189];
      puVar3 = param_1;
      puVar4 = param_1 + 0xc4;
      for (iVar2 = 0xc4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      param_1[0x18a] = uVar1;
      *(undefined1 *)((int)param_1 + 0x621) = 1;
      *(undefined1 *)(param_1 + 0x18b) = 1;
      param_1[0x189] = 0;
      *(undefined1 *)(param_1 + 0x188) = 0;
      *(byte *)((int)param_1 + 0x62d) = *(byte *)((int)param_1 + 0x62d) ^ 1;
    }
  }
  return;
}

