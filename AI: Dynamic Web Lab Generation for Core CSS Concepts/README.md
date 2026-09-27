# AI: Dynamic Web Lab Generation for Core CSS Concepts

## Overview
This task explores the use of sequential and contextual AI prompting to rapidly prototype interactive front-end web learning tools. By iteratively refining prompts, we generated functional single-file web applications that visually demonstrate the CSS Box Model, the `display` property, and modern CSS layout models (Flexbox and Grid).

## Tools Used
- **AI Tool**: Google Gemini Canvas / LLM Coding Assistant
- **Tech Stack**: HTML5, CSS3, Vanilla JavaScript (Single-file applications)

## Files in this Directory
1. `box_model_initial.html`: Initial Box Model & Display interactive lab featuring global sliders for padding, margin, width, border width, and display property switcher.
2. `box_model_refined.html`: Refined version implementing side-specific sliders (top, right, bottom, left) for padding, margin, and border-width, along with a corner radius control.
3. `flexbox_grid_playground.html`: Interactive playground for experimenting with CSS Flexbox and Grid container properties (`display`, `flex-direction`, `justify-content`, `align-items`, and `grid-template-columns`).

## Prompts Used

### Prompt 1: Initial Box Model Lab
> "Act as a frontend web developer. Using your Canvas tool, Generate an interactive website that can be used for understanding the CSS Box Model and its relationship with the display property. The page must have: 1. Two div elements, 'Box 1' and 'Box 2', so I can see how they interact. 'Box 1' will be the one we control. 2. The CSS must use different background colors for the content area, the padding area, and the margin area of 'Box 1' (e.g., using background-clip: content-box). The border should be a solid line. 3. A control panel with: - Sliders to control the padding, margin, border-width, and width of 'Box 1'. - Labels next to the sliders that show the current pixel value. - A Dropdown (select) to change the display property of 'Box 1' to: block, inline-block, and inline. 4. JavaScript that listens to all sliders and the dropdown, and updates the CSS properties of 'Box 1' in real-time."

### Prompt 2: Refinement (Side-Specific Controls)
> "Implement sliders to adjust the margin, padding, and border for each side (top, right, bottom, left) individually, and add a separate slider for the corner radius."

### Prompt 3: Flexbox and Grid Playground
> "Act as a frontend web developer. Using your Canvas tool, generate an interactive website that can be used as a playground for CSS Flexbox and Grid. The page should have: 1. A `div` element acting as the container. 2. Several `div` elements inside acting as the items (e.g., 5 items). 3. Dropdown menus (selects) that allow me to change the CSS properties of the container. 4. I need to be able to change: - display (to switch between block, flex, and grid) - flex-direction (row, column) - justify-content (flex-start, center, space-between, etc.) - align-items (flex-start, center, stretch, etc.) - grid-template-columns (e.g., 1fr 1fr, 1fr 1fr 1fr) 5. The JavaScript must update the container's CSS in real-time when I change a dropdown."
