mkdir custom_model
mkdir custom_model\obs_seq
mkdir custom_model\lambda
mkdir custom_model\recordings
mkdir custom_model\recordings\extracted_frames

FOR /L %%G IN (0, 1, %1) Do mkdir custom_model\lambda\%%G;
FOR /L %%G IN (0, 1, %1) Do mkdir custom_model\recordings\%%G;
FOR /L %%G IN (0, 1, %1) Do mkdir custom_model\recordings\extracted_frames\%%G;