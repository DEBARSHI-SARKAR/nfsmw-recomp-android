/* speed.exe 006d4dc0 FUN_006d4dc0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006d4dc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_0093deb8;
  uVar2 = (**(code **)(**(int **)(DAT_0093deb8 + 0x48) + 0x24))
                    (*(int **)(DAT_0093deb8 + 0x48),0,"BlackBloomIntensity");
  *(undefined4 *)(param_1 + 0x1fc) = uVar2;
  uVar2 = (**(code **)(**(int **)(iVar1 + 0x48) + 0x24))
                    (*(int **)(iVar1 + 0x48),0,"ColourBloomIntensity");
  *(undefined4 *)(param_1 + 0x200) = uVar2;
  uVar2 = (**(code **)(**(int **)(iVar1 + 0x48) + 0x24))
                    (*(int **)(iVar1 + 0x48),0,"ColourBloomTint");
  *(undefined4 *)(param_1 + 0x204) = uVar2;
  uVar2 = (**(code **)(**(int **)(iVar1 + 0x48) + 0x24))(*(int **)(iVar1 + 0x48),0,"Desaturation");
  *(undefined4 *)(param_1 + 0x208) = uVar2;
  uVar2 = (**(code **)(**(int **)(iVar1 + 0x48) + 0x24))
                    (*(int **)(iVar1 + 0x48),0,"DetailMapIntensity");
  *(undefined4 *)(param_1 + 0x210) = uVar2;
  uVar2 = (**(code **)(**(int **)(iVar1 + 0x48) + 0x24))
                    (*(int **)(iVar1 + 0x48),0,"VisualEffectBrightness");
  *(undefined4 *)(param_1 + 0x214) = uVar2;
  uVar2 = (**(code **)(**(int **)(iVar1 + 0x48) + 0x24))
                    (*(int **)(iVar1 + 0x48),0,"VisualEffectRadialBlur");
  *(undefined4 *)(param_1 + 0x218) = uVar2;
  uVar2 = (**(code **)(**(int **)(iVar1 + 0x48) + 0x24))
                    (*(int **)(iVar1 + 0x48),0,"VisualEffectVignette");
  *(undefined4 *)(param_1 + 0x21c) = uVar2;
  uVar2 = (**(code **)(**(int **)(iVar1 + 0x48) + 0x24))
                    (*(int **)(iVar1 + 0x48),0,"RadialBlurOffset");
  *(undefined4 *)(param_1 + 0x220) = uVar2;
  uVar2 = (**(code **)(**(int **)(iVar1 + 0x48) + 0x24))
                    (*(int **)(iVar1 + 0x48),0,"BlackBloomIntensity_0");
  *(undefined4 *)(param_1 + 0x224) = uVar2;
  uVar2 = (**(code **)(**(int **)(iVar1 + 0x48) + 0x24))
                    (*(int **)(iVar1 + 0x48),0,"BlackBloomIntensity_1");
  *(undefined4 *)(param_1 + 0x228) = uVar2;
  uVar2 = (**(code **)(**(int **)(iVar1 + 0x48) + 0x24))(*(int **)(iVar1 + 0x48),0,"Desaturation_0")
  ;
  *(undefined4 *)(param_1 + 0x22c) = uVar2;
  uVar2 = (**(code **)(**(int **)(iVar1 + 0x48) + 0x24))(*(int **)(iVar1 + 0x48),0,"Desaturation_1")
  ;
  *(undefined4 *)(param_1 + 0x230) = uVar2;
  return;
}

