/* speed.exe 007f9e82 FUN_007f9e82; analysis pseudocode, not buildable source.
 * calls 00862d36 FUN_00862d36
 */

int * __fastcall FUN_007f9e82(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)(param_1 + 0x2c);
  if ((undefined4 *)*puVar1 != puVar1) {
    piVar2 = (int *)*puVar1;
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    *piVar2 = 0xb;
    piVar2[1] = 0xb;
    piVar4 = (int *)(-(uint)(piVar2 + -2 != (int *)0x0) & (uint)piVar2);
    puVar1 = *(undefined4 **)(param_1 + 0x28);
    *puVar1 = piVar4;
    *(int **)(param_1 + 0x28) = piVar4;
    piVar4[1] = (int)puVar1;
    *piVar4 = param_1 + 0x24;
    piVar2[2] = 1;
    return piVar2 + -2;
  }
  FUN_00862d36(
              "VP6_CODEC_INTERNAL::GetFrameFromList() out of frames did you call CODEC::ReleaseFrame( FRAME *Frame )\n"
              );
  return (int *)0x0;
}

